/* import moudles */
const request = require("request");  
const cheerio = require("cheerio");
const express = require('express');
const app = express();

/* middle ware */
app.set('views', __dirname + '/views');
app.set('view engine', 'ejs');
app.engine('html', require('ejs').renderFile);


/* parsing */

let urlNaver = "https://www.naver.com/";
let jsonNaver = [];
let urlDaum = "https://www.daum.net/";
let jsonDaum = [];
let urlZum = "http://zum.com/";
let jsonZum = [];

    // naver
    request(urlNaver, function(err, response, body) {  
        if(err) {
            console.log();
        } else {
            let $ = cheerio.load(body);
            let data = $("ul.ah_l[data-list] li.ah_item");
            data.each(function() {
                let searchWord = $(this).find("span.ah_k").text();
                jsonNaver.push({searchWord : searchWord});
            });
        }
    });

    // daum
    request(urlDaum, function(err, response, body) {  
        if(err) {
            console.log();
        } else {
            let $ = cheerio.load(body);
            let data = $("div.realtime_part > ol.list_hotissue.issue_row li");
            data.each(function() {
                let searchWord = $(this).find("a.link_issue[tabindex]").text();
                jsonDaum.push({searchWord : searchWord});
            });
        }
    });

    // zum
    request(urlZum, function(err, response, body) {  
        if(err) {
            console.log();
        } else {
            let $ = cheerio.load(body);
            let data = $("li.d_rank");
            data.each(function() {
                let searchWord = $(this).find("a.d_btn_keyword.d_ready").text();
                jsonZum.push({searchWord : searchWord});
            });
        }
    });

/* router */
app.get('/',function(req,res){
    // res.render('index', JSON.stringify(jsonNaver));
});


/* Open server */
let server = app.listen(3000, function(){
    console.log("Express server has started on port 3000");
});