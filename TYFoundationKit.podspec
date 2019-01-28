Pod::Spec.new do |s|
  s.name             = 'TYFoundationKit'
  s.version          = '0.1.0'
  s.summary          = 'Foundation Kit from Tuya'
  s.homepage         = 'https://github.com/TuyaInc/TYFoundationKit'
  s.author           = { 'TuyaInc' => 'https://www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYFoundationKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.frameworks = 'Foundation'

  s.source_files = 'TYFoundationKit/Headers/**/*'
  s.vendored_library = 'TYFoundationKit/*.a'


end
