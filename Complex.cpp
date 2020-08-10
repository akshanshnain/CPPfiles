

class ComplexNumbers {
    
    
    private: int real,imag;

    public: 
    ComplexNumbers(int re,int img){
    	real=re;
    	imag=img;
	}
	int getreal(){
        return real;
    }
	int getimg(){
        return imag;
    }
    void setreal(int re){
        real=re;
    }
    void setimg(int img){
        imag=img;
    }
    
    void print(){
        cout <<real;
        if(imag<0){
            cout<<" - i";
        }
        if(imag>0){
            cout<<" + i";
        }
        if(imag!=0){
            cout<<imag;
        }
    }
        
    void plus(ComplexNumbers &f2){
        int re=this->real+f2.getreal();                
        int img=this->imag+f2.getimg();
		setreal(re);
        setimg(img);
        
    }
        
    void multiply(ComplexNumbers &f2){
        int re=(this->real*f2.getreal())-(this->imag*f2.getimg());                
        int img=(this->real*f2.getimg())+(this->imag*f2.getreal());
		setreal(re);
        setimg(img);
            
            
        }
    
};