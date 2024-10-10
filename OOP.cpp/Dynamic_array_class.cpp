/*#include <iostream>
using namespace std;
//#include "DynamicArray.cpp"
class DynamicArray {
	int *data;
	int nextIndex;
	int capacity;			// total size

	public :

	DynamicArray() {
		data = new int[5];
		nextIndex = 0;
		capacity = 5;
	}

	DynamicArray(DynamicArray const &d) {
		//this -> data = d.data;		// Shallow copy
		
		// Deep copy
		this -> data = new int[d.capacity];
		for(int i = 0; i < d.nextIndex; i++) {
			this -> data[i] = d.data[i];
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}

	void operator=(DynamicArray const &d) {
		this -> data = new int[d.capacity];
		for(int i = 0; i < d.nextIndex; i++) {
			this -> data[i] = d.data[i];
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}


	void add(int element) {
		if(nextIndex == capacity) {
			int *newData = new int[2 * capacity];
			for(int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			delete [] data;
			data = newData;
			capacity *= 2;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	int get(int i) const {
		if(i < nextIndex) {
			return data[i];
		}
		else {
			return -1;
		}
	}

	void add(int i, int element) {
			if(i < nextIndex) {
				data[i] = element;
			}
			else if(i == nextIndex) {
				add(element);
			}
			else {
				return;
			}
	}

	void print() const {
		for(int i = 0; i < nextIndex; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
};
int main() {
	DynamicArray d1;

	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);

	d1.print();

	DynamicArray d2(d1);		// Copy constructor

	DynamicArray d3;

	d3 = d1;

	d1.add(0, 100);

	d2.print();
	d3.print();
}*/
#include<iostream>
using namespace std;
class Dynamicarray
{
   int *data;
   int nextindex;
   int capacity;
   public:
        Dynamicarray()
        {
            data=new int[5];
            nextindex=0;
            capacity=5;
        }
        Dynamicarray(Dynamicarray const &d1)
        {
            //this->data=d1.data;           //shallow copy
            this->data=new int[d1.capacity]; //deep copy
            for(int i=0;i<d1.capacity;i++)
            {
               this->data[i]=d1.data[i];
            }
            this->nextindex=d1.nextindex;
            this->capacity=d1.capacity;
        }
        void add(int element)
        {
            if(nextindex==capacity)
            {
                int *Newdata=new int[2*capacity];
                for(int i=0;i<capacity;i++)
                {
                    Newdata[i]=data[i];
                }
                delete [] data;
                data=Newdata;
                capacity*=2;
            }
            data[nextindex++]=element;
        }
        int get(int i) const 
        {
            if(i<nextindex)
            {
                return data[i];
            }
            else
            {
                return -1;
            }
        }
        int add(int i,int element)
        {
            if(i<nextindex)
            {
                data[i]=element;
            }
            else if(i==nextindex)
            {
                add(element);
            }
            else{
                return -1;
            }
        }
        void print() const
        {
            for(int i=0;i<nextindex;i++)
            {
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }

};
int main()
{
    Dynamicarray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    cout<<"Enter index on which data you want to access"<<endl;
    int n;
    cin>>n;
    cout<<d1.get(n)<<endl;
    Dynamicarray d2(d1);
    d2.add(2,25);
    d1.print();
    d2.print();
}

