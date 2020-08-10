class Student {
			// total number of students present

	public :

	int rollNumber;
	int age;
	static int totalStudents;


	Student() {
		totalStudents++;
	}

	

	
	
};

int Student :: totalStudents = 0;	// initialze static data members


