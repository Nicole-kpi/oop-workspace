#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
private:
    int _id;
    static std::stack<int> available_ids;
    USBConnection(int id) : _id(id) {}
public:
    int get_id() const {
        return _id;
    }

    static USBConnection* CreateUsbConnection() {
        if (!available_ids.empty()) {
            int id = available_ids.top();
            available_ids.pop();
            return new USBConnection(id);
        } else {
            return nullptr;
        }
    }

    ~USBConnection() {
        available_ids.push(_id);
    }

    static void InitIDs(int max_ports) {
        while (!available_ids.empty()) available_ids.pop(); 
        for (int i = max_ports; i >= 1; --i) {
            available_ids.push(i);
        }
    }
};

std::stack<int> USBConnection::available_ids;

#endif
