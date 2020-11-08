#ifndef CHATBOT_H_
#define CHATBOT_H_

#include <wx/bitmap.h>
#include <string>
#include <memory>

class GraphNode; // forward declaration
class ChatLogic; // forward declaration

class ChatBot
{
private:
    // data handles (owned)
    wxBitmap *_image; // avatar image

    // data handles (not owned)
    GraphNode *_currentNode;
    GraphNode *_rootNode;
    ChatLogic *_chatLogic;

    // proprietary functions
    int ComputeLevenshteinDistance(std::string s1, std::string s2);

public:
    // constructors / destructors
    ChatBot();                                          // constructor WITHOUT memory allocation
    ChatBot(std::string filename);                      // constructor WITH memory allocation

    //// (Rule of 5)
    ////
    ChatBot(const ChatBot& src);                        // copy constructor
    ChatBot& operator=(const ChatBot& src);             // copy assignment operator
    ChatBot(ChatBot&& src) noexcept;                    // move constructor
    ChatBot& operator=(ChatBot&& src) noexcept;   // move assignment operator
    ~ChatBot();                                         // destructor
    ////

    // getters / setters
    void SetCurrentNode(GraphNode *node);
    void SetRootNode(GraphNode *rootNode) { _rootNode = rootNode; }
    void SetChatLogicHandle(ChatLogic *chatLogic) { _chatLogic = chatLogic; }
    wxBitmap *GetImageHandle() { return _image; }

    // communication
    void ReceiveMessageFromUser(std::string message);
};

#endif /* CHATBOT_H_ */