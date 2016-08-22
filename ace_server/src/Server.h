

#include "ace/Acceptor.h"
#include "ace/SOCK_Stream.h"
#include "ace/SOCK_Acceptor.h"


class ServerHandler;

typedef ACE_Acceptor<ServerHandler, ACE_SOCK_ACCEPTOR> ServerAcceptor;

typedef ACE_Svc_Handler<ACE_SOCK_STREAM, ACE_NULL_SYNCH> super;

class ServerHandler : public super
{
public:
	int open(void *);
	virtual int handle_input(ACE_HANDLE fd = ACE_INVALID_HANDLE);
	virtual int handle_output(ACE_HANDLE fd = ACE_INVALID_HANDLE);
};