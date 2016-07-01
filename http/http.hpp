#ifndef http_http_hpp_included_
#define http_http_hpp_included_

#include <memory>
#include <string>

#include "utility/tcpendpoint.hpp"

#include "contentgenerator.hpp"

namespace http {

class Http {
public:
    Http(const utility::TcpEndpoint &listen
         , unsigned int threadCount
         , ContentGenerator &contentGenerator);

    struct Detail;

private:
    std::shared_ptr<Detail> detail_;
    Detail& detail() { return *detail_; }
    const Detail& detail() const { return *detail_; }
};

} // namespace http

#endif // http_http_hpp_included_
