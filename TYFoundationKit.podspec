Pod::Spec.new do |s|

  s.name             = 'TYFoundationKit'
  
  s.version          = '1.1.0'
  
  s.summary          = 'Foundation Kit Powered By Tuya'
  s.homepage         = 'https://github.com/TuyaInc/TYFoundationKit'
  s.author           = { 'TuyaInc' => 'https://www.tuya.com' }
  s.license          = 'None'
  s.source           = { :git => 'https://github.com/TuyaInc/TYFoundationKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'
  s.ios.frameworks = 'UIKit', 'Foundation', 'CoreGraphics', 'CoreLocation', 'CoreTelephony'
  s.ios.source_files = 'TYFoundationKit/common/**/*', 'TYFoundationKit/ios/Headers/**/*'
  s.ios.vendored_library = 'TYFoundationKit/ios/*.a'
  s.ios.dependency 'Reachability'

  s.watchos.deployment_target = '2.0'
  s.watchos.frameworks = 'UIKit', 'Foundation', 'CoreGraphics', 'CoreLocation'
  s.watchos.source_files = 'TYFoundationKit/common/**/*', 'TYFoundationKit/watchos/Headers/**/*'
  s.watchos.vendored_library = 'TYFoundationKit/watchos/*.a'
   
end
