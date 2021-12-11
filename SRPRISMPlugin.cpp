#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SRPRISMPlugin.h"

void SRPRISMPlugin::input(std::string file) {
  inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);
}

void SRPRISMPlugin::run() {
   
}

void SRPRISMPlugin::output(std::string file) {
	//srprism mkindex -i Mouse.fa -o Mouse.srprism
	std::string command = "srprism mkindex -i "+inputfile+" -o "+file;
 std::cout << command << std::endl;

 system(command.c_str());

}

PluginProxy<SRPRISMPlugin> SRPRISMPluginProxy = PluginProxy<SRPRISMPlugin>("SRPRISM", PluginManager::getInstance());
