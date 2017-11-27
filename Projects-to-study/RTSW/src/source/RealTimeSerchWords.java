package source;
import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.select.Elements;

public class RealTimeSerchWords {

	public static void main(String[] args) throws Exception {
		Document document = Jsoup.connect("https://www.naver.com/").get();
        
        if (document != null) {
            Elements elements = document.select("ul > li.ah_item[data-order]");
            for (int i = 0; i < elements.size(); i++) {
                System.out.println("°Ë»ö¾î : " + elements.get(i).select("a.ah_a > span.ah_k").html());
                System.out.println("·©Å· : " + elements.get(i).select("a.ah_a > span.ah_r").html());
                System.out.println("------------------------------------------");
            }
        }
	}

}
