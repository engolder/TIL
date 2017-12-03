/* import moudles */
const request = require("request");  
const cheerio = require("cheerio");
const express = require('express');
const app = express();

/* middle ware */
app.set('views', __dirname + '/views');
app.set('view engine', 'ejs');
app.engine('html', require('ejs').renderFile);

let urlNaver = "https://www.naver.com/";
let jsonNaver = [];
let urlDaum = "https://www.daum.net/";
let jsonDaum = [];
let urlZum = "http://zum.com/";
let jsonZum = [];
let urlNate = "http://www.nate.com/nate/LiveKeyword";
let jsonNate = [];


/* parsing */
function loadRTSW(){
    // naver
    request(urlNaver, function(err, response, body) {  
        if(err) {
            console.log();
        } else {
            let $ = cheerio.load(body);
            let data = $("ul.ah_l[data-list] li.ah_item");
            jsonNaver = [];
            data.each(function() {
                let searchWord = $(this).find("span.ah_k").text();
                jsonNaver.push({searchWord : searchWord});
            });
        }

        // daum
        request(urlDaum, function(err, response, body) {  
            if(err) {
                console.log();
            } else {
                let $ = cheerio.load(body);
                let data = $("div.realtime_part > ol.list_hotissue.issue_row li");
                jsonDaum = [];
                data.each(function() {
                    let searchWord = $(this).find("a.link_issue[tabindex]").text();
                    jsonDaum.push({searchWord : searchWord});
                });
            }

            // zum
            request(urlZum, function(err, response, body) {  
                if(err) {
                    console.log();
                } else {
                    let $ = cheerio.load(body);
                    let data = $("li.d_rank");
                    jsonZum = [];
                    data.each(function() {
                        let searchWord = $(this).find("a.d_btn_keyword.d_ready").text();
                        jsonZum.push({searchWord : searchWord});
                    });
                }
                
                // nate
                // request({uri: urlNate, encoding: 'euc-kr'}, function(err, response, body) {  
                    // if(err) {
                    //     console.log();
                    // } else {
                    //     let searchWord;
                    //     console.log(body);
                    //     eval(body.replace("RSKS.Init();", ""));
                    //     array = JSON.parse(arrHotRecent);
                    //     array.forEach(key => {
                    //        jsonNate.push({searchWord : key[1]});
                    //     });
                    // }

                // });
            });
        });
    });
}

var timeInMs = Date.now();
loadRTSW();

/* router */
app.get('/',function(req, res){
    if((Date.now() - timeInMs) > 3000){
        loadRTSW();
        timeInMs = Date.now()
    }
    res.render('index', {jsonNaver : jsonNaver,jsonDaum : jsonDaum, jsonZum : jsonZum});
});

/* Open server */
let server = app.listen(3000, function(){
    console.log("Express server has started on port 3000");
});