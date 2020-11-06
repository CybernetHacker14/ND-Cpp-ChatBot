#include "graphedge.h"
#include "graphnode.h"

GraphNode::GraphNode(int id)
{
	_id = id;
}

void GraphNode::AddToken(std::string token)
{
	_answers.push_back(token);
}

void GraphNode::AddEdgeToParentNode(GraphEdge* edge)
{
	_parentEdges.push_back(edge);
}

void GraphNode::AddEdgeToChildNode(std::unique_ptr<GraphEdge> edge)
{
	_childEdges.push_back(std::move(edge));
}

//// Moving the ChatBot (one of the tasks)
////
void GraphNode::MoveChatbotHere(ChatBot chatbot)
{
	_chatBot = std::move(chatbot);
	_chatBot.SetCurrentNode(this);
}

void GraphNode::MoveChatbotToNewNode(GraphNode* newNode)
{
	newNode->MoveChatbotHere(_chatBot);
}
////
//// EOF STUDENT CODE

GraphEdge* GraphNode::GetChildEdgeAtIndex(int index)
{
	//// STUDENT CODE
	////

	return _childEdges[index].get();

	////
	//// EOF STUDENT CODE
}