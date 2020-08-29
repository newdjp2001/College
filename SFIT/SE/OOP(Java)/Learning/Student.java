
class StudentInfo
 	{
	int rollno;
	float marks;
	
	void setData(int rollno, float marks)
	{
		this.rollno= rollno;
		this.marks=marks;
	}
	
	void getData()
	{
		System.out.println("My Roll No : "+rollno);
		System.out.println("My Marks : "+marks);
	}
 }	
	public class Student 
	{
	public static void main(String[] args) {
		StudentInfo s1 = new StudentInfo();
		s1.setData(14,70.5f);
		s1.getData();
	}

	}

