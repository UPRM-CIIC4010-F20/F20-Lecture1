class Triangle
{

private:

    double sides[3];

public:
    // Contructors
    Triangle(double s1, double s2, double s3)
    {
        this->sides[0] = s1;
        this->sides[1] = s2;
        this->sides[2] = s3;
    }

    // Getters
    double getSide1() { return this->sides[0]; }
    double getSide2() { return this->sides[1]; }
    double getSide3() { return this->sides[2]; }

    // Setters
    void setSides(double s1, double s2, double s3)
    {
        this->sides[0] = s1;
        this->sides[1] = s2;
        this->sides[2] = s3;
    }

    // Instances methods
    double getArea();

    // Static methods
    static double sumAreas(Triangle *triangles[], int numTriangles)
    {
        double sum = 0.0;
        for(int i=0; i<numTriangles; i++) {
            sum += triangles[i]->getArea();
        }
        return sum;
    }

    static bool isEquilateral(Triangle* triangle){

        return triangle->getSide1() == triangle->getSide2() 
                && triangle->getSide1() == triangle->getSide3();
    }
};
