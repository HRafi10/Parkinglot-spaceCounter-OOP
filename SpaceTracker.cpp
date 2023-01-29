#include<iostream>
#include<string>

using namespace std;

class parkingLot
{
private:
    int t;
    int c;
    int b;
    int trucNum = 0;
    int carNum = 0;
    int bikeNum = 0;
public:

    parkingLot(int t1, int c1, int b1): t(t1),c(c1), b(b1)
    {}

    void setparkinglot()
    {
     int t11, c11, b11;
     cout <<"Enter the number of slots for each vehicle type in your parking lot: "  ;
     cin >> t11 >> c11 >> b11;

     t = t11;
     c = c11;
     b = b11;

    }
   int totalSpace = (t + c + b);

    void setVehicle()
    {
        char s;
        cout << "What do you want to do? Park (p), Unpark(u), Exit(e): p ;";
        cin >> s;
        if(s == p)
        {
        int x;
        cout << "enter (1 for truck, 2 for car, and 3 for bike) " << endl;
        cin >> x;
        int count = 0;
        while(count <= totalSpace)
        {
        if(x == 1)
        {
            truckNum++;
           if(truckNum <= t)
             cout << "Truck parked" << endl;
           else
             cout << "Error full. Cant park" << endl;

        }
        else if(x == 2)
        {
           carNum++;
           if(carNum <= c)
             cout << "car parked" << endl;
           else
             cout << "Error full. Cant park" << endl;
        }
        else if(x == 3)
        {
           bikeNum++;
           if(bikeNum <= b)
             cout << "bike parked" << endl;
           else
             cout << "Error full. Cant park" << endl;

        }
         cin >> x;
         count++;
        }
    }
    else if (s == u)
    {   int v = (truckNum +carNum +bikeNum );
        int y;
        cout << "enter (1 for truck, 2 for car, and 3 for bike) " << endl;
        cin >> y;
        while(v > 0)
        {
         if(x == 1)
        {
            truckNum--;
           if(truckNum <= t && truckNum > 0)
             cout << "Truck unparked" << endl;
           else
             cout << "Error empty. Cant unpark" << endl;
        }
        else if(x == 2)
        {
            carNum--;
           if(carNum <= t && carNum > 0)
             cout << "Car unparked" << endl;
           else
             cout << "Error empty. Cant unpark" << endl;
        }
        else if(x == 3)
        {
            bikeNum--;
           if(bikeNum <= t && bikeNum > 0)
             cout << "Bike unparked" << endl;
           else
             cout << "Error empty. Cant unpark" << endl;
        }
        cin >> y;
        v--;
        }

    }
     else
        cout << "Exiting" << endl;
    }

};

int main()
{
 parkingLot p1(2,1,2);
 p1.setVehicle();

 return;

}
