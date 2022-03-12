package prog_lab_7;

public class angle {
	point ftpoint, verpoint, sdpoint;
	
	public angle() {
		ftpoint = new point();
		verpoint = new point();
		sdpoint = new point();
	}
	
	public void vvod() {
		this.ftpoint.vvod();
		this.verpoint.vvod();
		this.sdpoint.vvod();
	}
	
	public void vivod()	{
		System.out.printf("(%f; %f;   %f; %f;   %f; %f)\n", this.ftpoint.getx(), this.ftpoint.gety(), this.verpoint.getx(), this.verpoint.gety(), this.sdpoint.getx(), this.sdpoint.gety());
	}

	public double value() {
		return Math.acos(((this.ftpoint.getx() - this.verpoint.getx()) * (this.sdpoint.getx() - this.verpoint.getx()) + (this.ftpoint.gety() - this.verpoint.gety()) * (this.sdpoint.gety() - this.verpoint.gety())) / this.ftpoint.distance(verpoint) / this.sdpoint.distance(verpoint)) / Math.PI * 180;
	}
}