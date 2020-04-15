#include<string>

class Person {
	private:
		std::string firstname;
		std::string lastname;
		int arbitrarynumber;

	public:
		Person();
		//Person() = default;  //This defines the default constructor 
		Person(std::string first, std::string last, int arbitrary);
		~Person(); //destructor
		void enterDetail();
		std::string getName();
};

