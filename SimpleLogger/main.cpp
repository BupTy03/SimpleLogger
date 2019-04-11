#include "SimpleLogger.hpp"

int main(int argc, char* argv[])
{
	SimpleLogger::Instance().setLoggerType(LoggerType::FILE);
	SimpleLogger::Instance().setLogLevel(SimpleLogger::FATAL | SimpleLogger::CRITICAL | SimpleLogger::DEBUG);
	// SimpleLogger::Instance().setFileName("log.txt");
	SimpleLogger::Instance().log("MY_TAG", "message for log");
	SimpleLogger::Instance().info("message for info");
	SimpleLogger::Instance().debug("message for debug");
	SimpleLogger::Instance().warning("message for warning");
	SimpleLogger::Instance().critical("message for critical");
	SimpleLogger::Instance().fatal("message for fatal");

	system("pause");
	return 0;
}