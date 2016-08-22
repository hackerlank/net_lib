

#include "ace/Connector.h"
#include "ace/SOCK_Stream.h"
#include "ace/SOCK_Connector.h"


class ClientHandler;

typedef ACE_Connector<ClientHandler, ACE_SOCK_CONNECTOR> ClientConnector;

typedef ACE_Svc_Handler<ACE_SOCK_STREAM, ACE_NULL_SYNCH> super;

class ClientHandler : public super
{
public:
	int open(void *);
	virtual int handle_input(ACE_HANDLE fd = ACE_INVALID_HANDLE);
	virtual int handle_output(ACE_HANDLE fd = ACE_INVALID_HANDLE);
};