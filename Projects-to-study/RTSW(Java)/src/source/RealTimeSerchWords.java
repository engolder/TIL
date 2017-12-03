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
        	
        	// [data-order]로 중복 방지
        		/*  [data-order]를 포함하는 li와 포함하지 않는 li두 개 존재
        			선택자에 data-order를 포함하지 않으면 같은 내용이 두 번 반복돼서 출력됨 */
            Elements elements = document.select("ul > li.ah_item[data-order] a.ah_a > span.ah_k");
            
            System.out.println("\n네이버");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". "); // rank
                System.out.println(elements.get(i).html()); // word
            }
        }
        
        // daum
        document = Jsoup.connect("https://www.daum.net/").get();
        if (document != null) {
        	
        	// [tabindex]로 중복 방지
            Elements elements = document.select("ol.issue_row > li a.link_issue[tabindex]");
            
            System.out.println("\n다음");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". "); // rank
                System.out.println(elements.get(i).html()); // word
            }
        }
        
        // zum
        document = Jsoup.connect("http://zum.com/#!/home").get();
        if (document != null) {
        	
        	// [tabindex]로 중복 방지
            Elements elements = document.select("ul.rank_list a.d_ready span");
            
            System.out.println("\n줌");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". "); // rank
                System.out.println(elements.get(i).html()); // word
            }
        }
        
        // nate
        /*
        document = Jsoup.connect("https://search.daum.net/nate?thr=sbma&w=tot&q=").get();
        if (document != null) {
        	
            Elements elements = document.select(".list_rank .keyword_rank a");
            
            System.out.println("\n네이트");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". "); // rank
                System.out.println(elements.get(i).html()); // word
            }
        }
        */
	}
}
