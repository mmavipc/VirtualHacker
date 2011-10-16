#ifndef H_GENERICSOCKETS
#define H_GENERICSOCKETS

#include <string>

namespace VirtualHacker
{
	typedef void* socket;
	class GenericSockets
	{
		public:
			virtual socket Connect(std::string ip, unsigned short port);
			virtual void Disconnect(socket sock);
		private:
	};
}

#endif