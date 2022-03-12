package prog_lab_7;

public class line {
	point ftpoint, sdpoint;
	
	public line() {
		ftpoint = new point();
		sdpoint = new point();
	}
	
	public void vvod() {
		this.ftpoint.vvod();
		this.sdpoint.vvod();
	}
	
	public void vivod()	{
		System.out.printf("(%f; %f;   %f; %f)\n", this.ftpoint.getx(), this.ftpoint.gety(), this.sdpoint.getx(), this.sdpoint.gety());
	}

	public double length() {
		return this.ftpoint.distance(this.sdpoint);
	}
}