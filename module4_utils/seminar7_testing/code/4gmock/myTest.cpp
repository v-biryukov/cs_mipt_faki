#include <gmock/gmock.h>
#include <gtest/gtest.h>

class Printer 
{
public:
    virtual bool print(const std::string& str) = 0;
    virtual ~Printer() = default;
};

class RealPrinter : public Printer 
{
public:
    bool print(const std::string& str) override
    {
        std::cout << str;
        return true;
    }
};

class MockPrinter : public Printer 
{
public:
    MOCK_METHOD(bool, print, (const std::string&), (override));
};


class MessageSender 
{
private:
    Printer& mPrinter;

public:
    MessageSender(Printer& printer) : mPrinter(printer) {}
    
    bool send(const std::string& msg) 
    {
        if (mPrinter.print("Message: " + msg))
        {
            std::cout << "Message sent successfully" << std::endl;
            return true;
        }
        else
        {
            std::cout << "Fail" << std::endl;
            return false;
        }
    }

};

/*
TEST(MessageSenderTest, RealPrinterTest) 
{
    RealPrinter printer;
    MessageSender sender(printer);
    
    bool result = sender.send("Hello");
    EXPECT_TRUE(result);
}
*/

TEST(MessageSenderTest, SendsFormattedMessage) 
{
    MockPrinter mock;
    MessageSender sender(mock);
    
    EXPECT_CALL(mock, print("Message: Hello"));
    sender.send("Hello");
}

