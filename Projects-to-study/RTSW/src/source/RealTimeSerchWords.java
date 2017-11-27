package source;
import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.select.Elements;

public class RealTimeSerchWords {

	public static void main(String[] args) throws Exception {
		
		Document document;
		
		// naver
		document = Jsoup.connect("https://www.naver.com/").get();
        if (document != null) {
        	
        	// [data-order]를 포함하는 li와 포함하지 않는 li두 개 존재
        	// 선택자에 data-order를 포함하지 않으면 같은 내용이 두 번 반복돼서 출력됨
            Elements elements = document.select("ul > li.ah_item[data-order] a.ah_a > span.ah_k");
            
            System.out.println("\n네이버");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". ");
                System.out.println("검색어 : " + elements.get(i).html());
            }
        }
        
        // daum
        document = Jsoup.connect("https://www.daum.net/").get();
        if (document != null) {
        	
            Elements elements = document.select("ol.issue_row > li a.link_issue[tabindex]");
            
            System.out.println("\n다음");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". ");
                System.out.println("검색어 : " + elements.get(i).html());
            }
        }
	}

}
