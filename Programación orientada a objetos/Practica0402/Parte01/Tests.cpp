#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Directory.h"
#include "TextFile.h"
#include "Root.h"
#include "File.h"
#include "BinaryFile.h"
#include "Parent.h"
#include "Inode.h"
#include "Name.h"
#include "Permissions.h"
#include "FSObject.h"
#include "FSOperations.h"


using namespace std;




TEST_CASE("Root", "[root-constructor]" ) {

        Directory *root = Root::root;
		REQUIRE("/"==root->getName());
		REQUIRE(0==root->getInode());
		REQUIRE(root==root->getParent());
}


TEST_CASE("Directory Constructor and Getters", "[Directtory-constructor]" ) {

        Directory *fso = new Directory("test",NULL);
        Directory *fso1 = new Directory("test",fso);
		REQUIRE("test"==fso1->getName());
		REQUIRE(1==fso->getInode());
		REQUIRE(2==fso1->getInode());
		REQUIRE(fso==fso1->getParent());
		bool equalpermissions =true;
		char*  permissions=fso->getPermissions();
		for(int i=0;i<3;i++){
            equalpermissions=equalpermissions&&(permissions[3*i]=='r');
            equalpermissions=equalpermissions&&(permissions[3*i+1]=='w');
            equalpermissions=equalpermissions&&(permissions[3*i+2]=='-');
		}
        REQUIRE(equalpermissions==true);
}



TEST_CASE("Directory addFSObject searchFSObject", "[testaddFSObjectssearchFSObject]" ) {

        Directory * dir = new Directory("test",NULL);
		TextFile * tf1 = new TextFile("file1", dir,"nada");
		REQUIRE(true==dir->addFSObject(tf1));
		REQUIRE(NULL!=dir->searchFSObject(tf1->getName()));

		TextFile * tf2 = new TextFile("file2", dir,"nada");
		REQUIRE(true==dir->addFSObject(tf2));
		REQUIRE(NULL!=dir->searchFSObject(tf2->getName()));

		TextFile * tf3 = new TextFile("file3", dir,"nada");
		REQUIRE(true==dir->addFSObject(tf3));
		REQUIRE(NULL!=dir->searchFSObject(tf3->getName()));

		TextFile *tf4 = new TextFile("file4", dir,"nada");
		REQUIRE(true==dir->addFSObject(tf4));
		REQUIRE(NULL!= dir->searchFSObject(tf4->getName()));

		REQUIRE( false==dir->addFSObject(tf1));
		REQUIRE( false==dir->addFSObject(tf2));
		REQUIRE(false==dir->addFSObject(tf3));
		REQUIRE(false==dir->addFSObject(tf4));

}


TEST_CASE("Directory DeleteFile searchFSObject", "[testDeleteFilesearchFSObject]" ) {

       Directory *dir = new Directory("test",NULL);
		TextFile* tf1 = new TextFile("file1", dir,"nada");
		dir->addFSObject(tf1);
		TextFile *tf2 = new TextFile("file2", dir,"nada");
		dir->addFSObject(tf2);
		TextFile *tf3 = new TextFile("file3", dir,"nada");
		dir->addFSObject(tf3);
		TextFile *tf4 = new TextFile("file4", dir,"nada");
		dir->addFSObject(tf4);
		TextFile *tf5 = new TextFile("file5", dir,"nada");
		dir->addFSObject(tf5);



		REQUIRE(true==dir->removeFSObject(tf3->getName()) );
		REQUIRE(NULL==dir->searchFSObject(tf3->getName()));
		REQUIRE(true==dir->removeFSObject(tf5->getName()) );
		REQUIRE(NULL== dir->searchFSObject(tf5->getName()));
		REQUIRE(true==dir->removeFSObject(tf1->getName()) );
		REQUIRE(NULL== dir->searchFSObject(tf1->getName()));
		REQUIRE( true==dir->removeFSObject(tf2->getName()) );
		REQUIRE(NULL==dir->searchFSObject(tf2->getName()));
		REQUIRE(true==dir->removeFSObject(tf4->getName()) );
		REQUIRE(NULL==dir->searchFSObject(tf4->getName()));

		REQUIRE(false==dir->removeFSObject(tf4->getName()) );

}


TEST_CASE("Estructura de clases", "[estructura de clases]" ) {
    Directory *dir = new Directory("test",NULL);
    TextFile* tf1 = new TextFile("file1", dir,"nada");
    BinaryFile* bf1 = new BinaryFile("file2", dir,"nada");

    REQUIRE(dynamic_cast<Inode*>(dir) != NULL);
    REQUIRE(dynamic_cast<Parent*>(dir) != NULL);
    REQUIRE(dynamic_cast<Name*>(dir) != NULL);
    REQUIRE(dynamic_cast<Permissions*>(dir) != NULL);
    REQUIRE(dynamic_cast<FSOperations*>(dir) != NULL);
    REQUIRE(dynamic_cast<FSObject*>(dir) != NULL);


    REQUIRE(dynamic_cast<Inode*>(tf1) != NULL);
    REQUIRE(dynamic_cast<Parent*>(tf1) != NULL);
    REQUIRE(dynamic_cast<Name*>(tf1) != NULL);
    REQUIRE(dynamic_cast<Permissions*>(tf1) != NULL);
    REQUIRE(dynamic_cast<FSOperations*>(tf1) != NULL);
    REQUIRE(dynamic_cast<FSObject*>(tf1) != NULL);
     REQUIRE(dynamic_cast<File*>(tf1) != NULL);

      REQUIRE(dynamic_cast<Inode*>(bf1) != NULL);
    REQUIRE(dynamic_cast<Parent*>(bf1) != NULL);
    REQUIRE(dynamic_cast<Name*>(bf1) != NULL);
    REQUIRE(dynamic_cast<Permissions*>(bf1) != NULL);
    REQUIRE(dynamic_cast<FSOperations*>(bf1) != NULL);
    REQUIRE(dynamic_cast<FSObject*>(bf1) != NULL);
     REQUIRE(dynamic_cast<File*>(bf1) != NULL);

}



