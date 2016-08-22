

#include "Client.h"

int ClientHandler::open(void *p)
{
	if (super::open(p) == -1)
	{
		return -1;
	}
	return 0;
}

int ClientHandler::handle_input(ACE_HANDLE fd /*= ACE_INVALID_HANDLE*/)
{
	return 0;
}

int ClientHandler::handle_output(ACE_HANDLE fd /*= ACE_INVALID_HANDLE*/)
{
	return 0;
}