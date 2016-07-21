#ifndef http_request_hpp_included_
#define http_request_hpp_included_

#include <string>
#include <vector>

namespace http {

struct Header {
    std::string name;
    std::string value;

    typedef std::vector<Header> list;

    Header() {}
    Header(const std::string &name, const std::string &value)
        : name(name), value(value) {}
};

struct Request {
    std::string uri;
    Header::list headers;

    bool hasHeader(const std::string &name) const;
};

} // namespace http

#endif // http_request_hpp_included_