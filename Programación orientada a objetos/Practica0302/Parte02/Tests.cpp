#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "AbsList.h"
#include "LinkList.h"
#include "Node.h"
#include "ArrList.h"
#include <string>
using namespace std;


TEST_CASE("Constructor ArrList", "[testConstructor]" ) {

        ArrList * al = new ArrList();

		REQUIRE(0 == al->size());

}


TEST_CASE("Add ArrList", "[testAdd]" ) {

        AbsList * al = new ArrList();
		for(int i=0;i<1000;i++) {
			REQUIRE(true==al->add(""+i));
			REQUIRE(true==al->contains(""+i));
			REQUIRE(i+1==al->size());
		}

		REQUIRE(false==al->add("a"));
		REQUIRE(false==al->contains("a"));
		REQUIRE(1000==al->size());

}

TEST_CASE("Clear ArrList", "[testClear]" ) {

 AbsList * al = new ArrList();
		for(int i=0;i<1000;i++) {
			REQUIRE(true==al->add(""+i));
			REQUIRE(true==al->contains(""+i));
			REQUIRE(i+1==al->size());
		}
		al->clear();
		REQUIRE(0==al->size());
		for(int i=0;i<1000;i++) {
			REQUIRE(true==al->add(""+i));
		}
}


TEST_CASE("testGetGreaterOrEqualThanLength ArrList", "[testGetGreaterOrEqualThanLength]" ) {
        AbsList * al = new ArrList();
		for(int i=0;i<50;i++) {
			al->add(""+i);
		}

		for(int i=50;i<100;i++) {
			REQUIRE(""==al->get(i));
		}

}

TEST_CASE("testIsEmpty ArrList", "[testIsEmpty]" ) {
        AbsList * al = new ArrList();
		REQUIRE(true==al->isEmpty());
		al->add(""+1);
		REQUIRE(false==al->isEmpty());
}

TEST_CASE("testRemove ArrList", "[testRemove]" ) {
       AbsList * al = new ArrList();
		al->add("a");
		al->add("b");
		al->add("c");
		al->add("a");
		al->add("b");
		al->add("c");
		al->add("a");

        REQUIRE(true==al->remove("a"));
        REQUIRE(false==al->contains("a"));
        REQUIRE(4==al->size());
        REQUIRE(true==al->remove("b"));
        REQUIRE(false==al->contains("b"));
        REQUIRE(2==al->size());
        REQUIRE(true==al->remove("c"));
        REQUIRE(false==al->contains("c"));
        REQUIRE(0==al->size());
		REQUIRE(false==al->remove("a"));
}

TEST_CASE("testRemoveIsEmpty ArrList", "[testRemoveIsEmpty]" ) {
        AbsList * al = new ArrList();
		REQUIRE(true==al->isEmpty());
		al->add(""+1);
		REQUIRE(false==al->isEmpty());
		al->remove(""+1);
		REQUIRE(true==al->isEmpty());
}

TEST_CASE("testSet ArrList", "[testSet]" ) {
        AbsList * al = new ArrList();
		REQUIRE(""==al->set(0,""+0));


		for(int i=0;i<250;i++) {
			al->add(""+i);
		}

		for(int i=0;i<250;i++) {
			al->set(i,""+(250+i));
			REQUIRE(true==al->contains(""+(250+i)));
		}

		for(int i=250;i<500;i++) {
			REQUIRE(""==al->set(i,""+i));
		}
}

TEST_CASE("testGetSet ArrList", "[testGetSet]" ) {
        AbsList * al = new ArrList();
		for(int i=0;i<50;i++) {
			al->add(""+i);
		}

		for(int i=0;i<50;i++) {
			string o = al->get(i);
			REQUIRE(o==al->set(i,""+(250+i)));
			REQUIRE(""+(250+i)==al->get(i));
		}
}


TEST_CASE("Constructor LinkList", "[testConstructor]" ) {

        LinkList * al = new LinkList();

		REQUIRE(0 == al->size());

}


TEST_CASE("Add LinkList", "[testAdd]" ) {

        AbsList * al = new LinkList();
		for(int i=0;i<1000;i++) {
			REQUIRE(true==al->add(""+i));
			REQUIRE(true==al->contains(""+i));
			REQUIRE(i+1==al->size());
		}

		REQUIRE(true==al->add("a"));
		REQUIRE(true==al->contains("a"));
		REQUIRE(1001==al->size());

}

TEST_CASE("Clear LinkList", "[testClear]" ) {

 AbsList * al = new LinkList();
		for(int i=0;i<1000;i++) {
			REQUIRE(true==al->add(""+i));
			REQUIRE(true==al->contains(""+i));
			REQUIRE(i+1==al->size());
		}
		al->clear();
		REQUIRE(0==al->size());
		for(int i=0;i<1000;i++) {
			REQUIRE(true==al->add(""+i));
		}
}


TEST_CASE("testGetGreaterOrEqualThanLength LinkList", "[testGetGreaterOrEqualThanLength]" ) {
        AbsList * al = new LinkList();
		for(int i=0;i<50;i++) {
			al->add(""+i);
		}

		for(int i=50;i<100;i++) {
			REQUIRE(""==al->get(i));
		}

}

TEST_CASE("testIsEmpty LinkList", "[testIsEmpty]" ) {
        AbsList * al = new LinkList();
		REQUIRE(true==al->isEmpty());
		al->add(""+1);
		REQUIRE(false==al->isEmpty());
}

TEST_CASE("testRemove LinkList", "[testRemove]" ) {
       AbsList * al = new LinkList();
		al->add("a");
		al->add("b");
		al->add("c");
		al->add("a");
		al->add("b");
		al->add("c");
		al->add("a");

        REQUIRE(true==al->remove("a"));
        REQUIRE(false==al->contains("a"));
        REQUIRE(4==al->size());
        REQUIRE(true==al->remove("b"));
        REQUIRE(false==al->contains("b"));
        REQUIRE(2==al->size());
        REQUIRE(true==al->remove("c"));
        REQUIRE(false==al->contains("c"));
        REQUIRE(0==al->size());
		REQUIRE(false==al->remove("a"));
}

TEST_CASE("testRemoveIsEmpty LinkList", "[testRemoveIsEmpty]" ) {
        AbsList * al = new LinkList();
		REQUIRE(true==al->isEmpty());
		al->add(""+1);
		REQUIRE(false==al->isEmpty());
		al->remove(""+1);
		REQUIRE(true==al->isEmpty());
}

TEST_CASE("testSet LinkList", "[testSet]" ) {
        AbsList * al = new LinkList();
		REQUIRE(""==al->set(0,""+0));


		for(int i=0;i<250;i++) {
			al->add(""+i);
		}

		for(int i=0;i<250;i++) {
			al->set(i,""+(250+i));
			REQUIRE(true==al->contains(""+(250+i)));
		}

		for(int i=250;i<500;i++) {
			REQUIRE(""==al->set(i,""+i));
		}
}

TEST_CASE("testGetSet LinkList", "[testGetSet]" ) {
        AbsList * al = new LinkList();
		for(int i=0;i<50;i++) {
			al->add(""+i);
		}

		for(int i=0;i<50;i++) {
			string o = al->get(i);
			REQUIRE(o==al->set(i,""+(250+i)));
			REQUIRE(""+(250+i)==al->get(i));
		}
}

