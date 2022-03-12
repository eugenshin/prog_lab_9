package prog_lab_7;
import java.util.Scanner;

public class circle {
	point center;
	double radius;
	
	public circle() {
		center = new point();
	}
	
	public void vvod() {
		this.center.vvod();
		Scanner in = new Scanner(System.in);
		this.radius = in.nextDouble();
	}
	
	public void vivod()	{
		System.out.printf("(%f; %f;   %f)\n", this.center.getx(), this.center.gety(), this.radius);
	}

	public double square() {
            return radius*radius*Math.PI;
	}
	
	public double per() {
            return 2*Math.PI*radius;
	}
}