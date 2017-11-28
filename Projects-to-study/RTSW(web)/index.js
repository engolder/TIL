let request = require('request');
let express = require('express');
let app = express();

app.get('/', (req, res) => {

    request("http://www.naver.com/", (err, resd, body) => {
        let bigFilter = /실시간[\s\S]*?ah_ico_open/g;
        let smallFilter = /<div[\s\S]*?<\/div>/g;
        let smallerFilter = /<span class="ah_k">[\s\S]*?<\/span>/g;

        let result = smallFilter.exec(bigFilter.exec(body)[0])[0];
        // console.log(result);
        var d;
        var x = [];
        var resp = "";

        while ((d = smallerFilter.exec(result)) !== null) {
            x.push(d[0]);
        }

        for (var i in x) {
            resp += x[i] + '<br />\n';
        }
        res.write(`
        <!DOCTYPE HTML>
        <html>
            <head>
            <meta charset="utf-8" >
                <title> Naver 실시간 검색어 </title>
            </head>
            <body>\n`
            + resp +
            "</body> </html>");
        
        res.end();
    });
});

app.listen(8080, () => {
    console.log("Server opened at http://localhost:8080/");
});