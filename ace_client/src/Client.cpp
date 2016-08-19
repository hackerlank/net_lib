

#include "Client.h"

int serverHandler::open(void *p)
{
	if (super::open(p) == -1)
	{
		return -1;
	}
	return 0;
}

int serverHandler::handle_output(ACE_HANDLE fd /*= ACE_INVALID_HANDLE*/)
{
	return 0;
}
