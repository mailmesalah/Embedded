//HEADER FILES
#include <reg52.h>

//LOGIN SELECT KEYS
#define SelectAdmin 1
#define SelectTeacher 2
//ADMIN SELECT KEYS
#define KeyTeacher 1
#define KeyStudent 2
#define KeySubject 3
#define KeyClearAttendance 4
#define KeyPassword 5
#define KeyAdminLogout 6
//TEACHER MENU FOR ADMIN
#define CreateTeacher 1
#define EditTeacher 2
#define DeleteTeacher 3
//STUDENT MENU FOR ADMIN
#define CreateStudent 1
#define EditStudent 2
#define DeleteStudent 3
//SUBJECT MENU FOR ADMIN
#define CreateSubject 1
#define EditSubject 2
#define DeleteSubject 3
//TEACHER SELECT KEYS
#define KeyNewAttendance 1
#define KeyEditAttendance 2
#define KeyDeleteAttendance 3
#define KeyTeacherLogout 4

//GLOBAL VARIABLES
int result;

// FUNCTION PROTOTYPES
void initializeDevice(void);
void showAndSetDate(void);
void showWelcomeScreen(void);
void showAdminLogin(void);
void showAdminDisplay(void);
void createTeacher(void);
void editTeacher(void);
void deleteTeacher(void);
void showTeachersMenu(void);
void showStudentMenu(void);
void createStudent(void);
void editStudent(void);
void deleteStudent(void);
void showSubjectMenu(void);
void createSubject(void);
void editSubject(void);
void deleteSubject(void);
void clearAttendance(void);
void changePassword(void);
void showTeacherDisplay(void);
void newAttendance(void);
void editAttendance(void);
void deleteAttendance(void);
void clearSession(void);
void clearDevice(void);
void stopDevice(void);
void showTeacherLogin(void);
int getKeyPressed(void);
/*............................................................
FUNCTION DEFINITION : main() 
..............................................................*/
void main(void){
	initializeDevice();
	showAndSetDate();	
	while(1){		
		showWelcomeScreen();
		result=getKeyPressed();
		if(result==SelectAdmin){
			showAdminLogin();
		}else if(result==SelectTeacher){
			showTeacherLogin();
		}
	}
	clearDevice();
	stopDevice();
}
/*............................................................
END OF DEFINITION : main() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : void initializeDevice() 
..............................................................*/
void initializeDevice(){

}
/*............................................................
END OF DEFINITION :void initializeDevice() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : showAndSetDate() 
..............................................................*/
void showAndSetDate(){

}
/*............................................................
END OF DEFINITION : showAndSetDate() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : showWelcomeScreen() 
..............................................................*/
void showWelcomeScreen(){

}
/*............................................................
END OF DEFINITION : showWelcomeScreen() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : showAdminLogin() 
..............................................................*/
void showAdminLogin(){
	showAdminDisplay();
	while(1){
		result=getKeyPressed();
		if(result==KeyTeacher){
			showTeachersMenu();
			result=getKeyPressed();
			if(result==CreateTeacher)
				createTeacher();
			else if(result==EditTeacher)
				editTeacher();
			else if(result==DeleteTeacher)
				deleteTeacher();
		}else if(result==KeyStudent){
			showStudentMenu();
			result=getKeyPressed();
			if(result==CreateStudent)
				createStudent();
			else if(result==EditStudent)
				editStudent();
			else if(result==DeleteStudent)
				deleteStudent();
		}else if(result==KeySubject){
			showSubjectMenu();
			result=getKeyPressed();
			if(result==CreateSubject)
				createSubject();
			else if(result==EditSubject)
				editSubject();
			else if(result==DeleteSubject)
				deleteSubject();
		}else if(result==KeyClearAttendance){
			clearAttendance();	
		}else if(result==KeyPassword){
			changePassword();
		}else if(result==KeyAdminLogout){
			return;
		}
	}
}
/*............................................................
END OF DEFINITION : showAdminLogin() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : showTeacherLogin() 
..............................................................*/
void showTeacherLogin(){
	showTeacherDisplay();
	while(1){
		result=getKeyPressed();
		if(result==KeyNewAttendance)
			newAttendance();
		else if(result==KeyEditAttendance)
			editAttendance();
		else if(result==KeyDeleteAttendance)
			deleteAttendance();
		else if(result==KeyTeacherLogout){
			clearSession();
			return;
		}
	}
}
/*............................................................
END OF DEFINITION : showTeacherLogin() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : getKeyPressed() 
..............................................................*/
int getKeyPressed(){
	return 0;
}
/*............................................................
END OF DEFINITION : getKeyPressed() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : showAdminDisplay() 
..............................................................*/
void showAdminDisplay(){

}
/*............................................................
END OF DEFINITION : showAdminDisplay() 
..............................................................*/

/*............................................................
FUNCTION DEFINITION : createTeacher() 
..............................................................*/
void createTeacher(){

}
/*............................................................
END OF DEFINITION : createTeacher() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : editTeacher() 
..............................................................*/
void editTeacher(){

}
/*............................................................
END OF DEFINITION : editTeacher() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : deleteTeacher() 
..............................................................*/
void deleteTeacher(){

}
/*............................................................
END OF DEFINITION : deleteTeacher() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : showTeachersMenu() 
..............................................................*/
void showTeachersMenu(){

}
/*............................................................
END OF DEFINITION : showTeachersMenu() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : showStudentMenu() 
..............................................................*/
void showStudentMenu(){

}
/*............................................................
END OF DEFINITION : showStudentMenu() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : createStudent() 
..............................................................*/
void createStudent(){

}
/*............................................................
END OF DEFINITION : createStudent() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : editStudent() 
..............................................................*/
void editStudent(){

}
/*............................................................
END OF DEFINITION : editStudent() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : deleteStudent() 
..............................................................*/
void deleteStudent(){

}
/*............................................................
END OF DEFINITION : deleteStudent() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : showSubjectMenu() 
..............................................................*/
void showSubjectMenu(){

}
/*............................................................
END OF DEFINITION : showSubjectMenu() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : createSubject() 
..............................................................*/
void createSubject(){

}
/*............................................................
END OF DEFINITION : createSubject() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : editSubject() 
..............................................................*/
void editSubject(){

}
/*............................................................
END OF DEFINITION : editSubject() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : deleteSubject() 
..............................................................*/
void deleteSubject(){

}
/*............................................................
END OF DEFINITION : deleteSubject() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : clearAttendance() 
..............................................................*/
void clearAttendance(){

}
/*............................................................
END OF DEFINITION : clearAttendance() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : changePassword() 
..............................................................*/
void changePassword(){

}
/*............................................................
END OF DEFINITION : changePassword() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : showTeacherDisplay() 
..............................................................*/
void showTeacherDisplay(){

}
/*............................................................
END OF DEFINITION : showTeacherDisplay() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : newAttendance() 
..............................................................*/
void newAttendance(){

}
/*............................................................
END OF DEFINITION : newAttendance() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : editAttendance() 
..............................................................*/
void editAttendance(){

}
/*............................................................
END OF DEFINITION : editAttendance() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : deleteAttendance() 
..............................................................*/
void deleteAttendance(){

}
/*............................................................
END OF DEFINITION : deleteAttendance() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : clearSession() 
..............................................................*/
void clearSession(){

}
/*............................................................
END OF DEFINITION : clearSession() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : clearDevice() 
..............................................................*/
void clearDevice(){

}
/*............................................................
END OF DEFINITION : clearDevice() 
..............................................................*/


/*............................................................
FUNCTION DEFINITION : stopDevice() 
..............................................................*/
void stopDevice(){

}
/*............................................................
END OF DEFINITION : stopDevice() 
..............................................................*/



