package prog_lab_7;

public class triangle {
	point ftpoint, sdpoint, tdpoint;
	
	public triangle() {
		ftpoint = new point();
		sdpoint = new point();
		tdpoint = new point();
	}
	
	public void vvod() {
		this.ftpoint.vvod();
		this.sdpoint.vvod();
		this.tdpoint.vvod();
	}
	
	public void vivod()	{
		System.out.printf("(%f; %f;   %f; %f	%f; %f)\n", this.ftpoint.getx(), this.ftpoint.gety(), this.sdpoint.getx(), this.sdpoint.gety(), this.tdpoint.getx(), this.tdpoint.gety());
	}
	
	public double square() {
		return Math.abs((sdpoint.getx() - ftpoint.getx()) * (tdpoint.gety() - ftpoint.gety()) - (tdpoint.getx() - ftpoint.getx()) * (sdpoint.gety() - ftpoint.gety())) / 2;
	}

	public double per() {
		return ftpoint.distance(sdpoint) + sdpoint.distance(tdpoint) + tdpoint.distance(ftpoint);
	}
}
