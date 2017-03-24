#include <iostream>
using namespace std;

class Light {
	private:
		double red_dur,green_dur;
	

	
	public:
		Light(int r,int g){
		
		
			red_dur=r;
			green_dur=g;
	
	
	}
	
	int getRed_dur(){
		return red_dur;
	}
	int getGreen_dur(){
		return green_dur;
	}
};
class Road {
		
	private:
		int	numberOfCar;
		Light *light;	
	public:
		Road(int nc,Light *l){
			
			numberOfCar=nc;
			light=l;
		}

	double Calculator(){
		return (numberOfCar*light->getRed_dur())/(light->getGreen_dur()+light->getRed_dur());
	
	}
 	
	
};

int main(){
	int r,k,x;
	
	cout<<"Please enter red duration (sec): ";
	cin>>r;
	cout<<"please enter green duration (sec) : ";
	cin>>k;
	Light *light=new Light(r,k);
	cout<<"Please enter The number of cars passing on the road per minute : ";
	cin>>x;
	Road *road=new Road(x,light);
	cout<<"Average number of cars waiting per minute :";
	cout<<road->Calculator();
}
