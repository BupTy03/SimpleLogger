#include "ConsoleLogger.hpp"
#include "FileLogger.hpp"

int main(int argc, char* argv[])
{
	FileLogger logger("log.txt", FileLogger::FATAL | FileLogger::CRITICAL | FileLogger::DEBUG);
	logger.log("MY_TAG", "message for log");
	logger.info("message for info");
	logger.debug("message for debug");
	logger.warning("message for warning");
	logger.critical("message for critical");
	logger.fatal("message for fatal");

	system("pause");
	return 0;
}