#import <ABI45_0_0RNReanimated/ErrorHandler.h>
#import <ABI45_0_0RNReanimated/Scheduler.h>
#include <memory>
#include <string>

namespace ABI45_0_0reanimated {

class ABI45_0_0REAIOSErrorHandler : public ErrorHandler {
  std::shared_ptr<Scheduler> scheduler;
  void raiseSpec() override;
  std::shared_ptr<ErrorWrapper> error;

 public:
  ABI45_0_0REAIOSErrorHandler(std::shared_ptr<Scheduler> scheduler);
  std::shared_ptr<Scheduler> getScheduler() override;
  std::shared_ptr<ErrorWrapper> getError() override;
  void setError(std::string message) override;
  virtual ~ABI45_0_0REAIOSErrorHandler() {}
};

} // namespace reanimated
