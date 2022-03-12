package prog_lab_7;

public class main {
	public static void main(String args[]) {
		point pt1 = new point();
		point pt2 = new point(1);
		point pt3 = new point(2, 3);
		System.out.printf("Point 1 - without parameters\t");
		pt1.vivod();
		System.out.printf("Point 2 - with 1 parameter\t");
		pt2.vivod();
		System.out.printf("Point 3 - with 2 parameters\t");
		pt3.vivod();
		segments sm = new segments(2);
		System.out.printf("Segments\n");
		sm.vivod();
   }
}