class Rectangle {
    private:
        double length;
        double width;
    public: 
        Rectangle(){}
        Rectangle(double length, double width){
            this -> length = length;
            this -> width = width;
        }
        void setLength(double length){
            this -> length = length;
        }
        void setWidth(double width){
            this -> width = width;
        }
        double getLength(){
            return this -> length;
        }
        double getWidth(){
            return this -> width;
        }
        double getArea(){
            return length * width;
        }
        double getPerimeter(){
            return 2 * (length + width);
        }
};