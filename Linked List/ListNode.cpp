#include "ListNode.h"

ListNode::ListNode()
{

}

ListNode::ListNode(ListNode & a_next, ListNode & a_prev, int a_value)
{
	next = &a_next;
	prev = &a_prev;
	value = a_value;
}

ListNode::~ListNode()
{
}
