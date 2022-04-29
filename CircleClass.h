//Class for a circle object
class Circle {
	private:
		double radius;
		const double pi = 3.14159;
	public:
		Circle();
		Circle(double);
		void setRadius(double);
		double getRadius();
		double getArea();
		double getDiameter();
		double getCircumference();
};
