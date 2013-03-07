#pragma once

#include <string>

namespace emilpro
{
	class Configuration
	{
	public:
		typedef enum
		{
			DIR_LOCAL,
			DIR_INSTALLED,
			DIR_REMOTE,
			DIR_CONFIGURATION,
		} Dir_t;

		std::string getBasePath();

		std::string getPath(Dir_t dir);

		void destroy();

		static Configuration &instance();

	private:
		std::string m_basePath;
	};
}