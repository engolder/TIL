package study;

public class Book {
	String title;
	String author;
	int ISBN;
	
	public Book(String title, String author, int ISBN) {
		this.title = title;
		this.author = author;
		this.ISBN = ISBN;
	}
	public Book(String title, int ISBN) {
		this(title, "Anonymous", ISBN);
	}
	public Book() {
		this(null, null, 0);
		System.out.println("�����ڰ� ȣ��Ǿ���");
	}
	
	public static void main(String[] args) {
		Book javaBook = new Book("Java JDK","Ȳ����",3333);
		Book holyBible = new Book("Holy Bible",1);
		Book emptyBook = new Book();
	}
}
