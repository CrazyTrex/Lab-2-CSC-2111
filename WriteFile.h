/*Group Members Will Stump & Adam Rucker
	1/26/2017
	Lab 2/ Structs to Classes WriteFile
*/
#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>


using namespace std;

//! Class to manage opening up a file and writing to the file
/*!
 *The Writefile class accepts a const char* in the constructor that is the file that the user wants to write too
 *A ofstream object is created based on the const char* passed to the constructor
 * The Writefile class can write a line and close the document when completed with the document.
 *Note that the destructor does close the file if it not closed prior
 */
class WriteFile
{	
	private:
		ofstream output_file;
		bool closed;
	public:
//!The constructor accepts a const char* that represents the file name of the file that hte user wants to output to
		WriteFile(const char* file_name);
//!The destructor closes the program if the file was not closed already
		~WriteFile();
//!The write line writes to the next line in the file as long as the file has not been closed prior
		void writeLine(String* line);
//! The close() closes the file ending the ability to write to the file.
		void close();
};
/*
WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);
*/
#endif
