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
        	
        	// [data-order]�� �����ϴ� li�� �������� �ʴ� li�� �� ����
        	// �����ڿ� data-order�� �������� ������ ���� ������ �� �� �ݺ��ż� ��µ�
            Elements elements = document.select("ul > li.ah_item[data-order] a.ah_a > span.ah_k");
            
            System.out.println("\n���̹�");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". ");
                System.out.println("�˻��� : " + elements.get(i).html());
            }
        }
        
        // daum
        document = Jsoup.connect("https://www.daum.net/").get();
        if (document != null) {
        	
            Elements elements = document.select("ol.issue_row > li a.link_issue[tabindex]");
            
            System.out.println("\n����");
            System.out.println("===========================================");
            
            for (int i = 0; i < elements.size(); i++) {
                System.out.print((i+1) + ". ");
                System.out.println("�˻��� : " + elements.get(i).html());
            }
        }
	}

}
