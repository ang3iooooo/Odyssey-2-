#pragma once

using namespace System;

public ref class PlayerData {

     private:

	    String^ name;

public:
	void setInformation(String^ aname) {
		
		name = aname;

	}

	String^ getname() {
		return name;
	}
};