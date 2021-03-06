
#include "ace/OS_main.h"
#include "ace/OS_NS_stdio.h"
#include "Client.h"

int ACE_TMAIN(int argc, ACE_TCHAR ** argv)
{
	ACE_INET_Addr port_to_connect(ACE_TEXT("HAStatus"), ACE_LOCALHOST);
	ClientConnector connector;
	ClientHandler* clientHandler = new ClientHandler;
	connector.connect(clientHandler, port_to_connect);

	connector.reactor()->run_event_loop();
	ACE_OS::puts(ACE_TEXT("This example requires threads."));
	return 0;
}
