
Pod::Spec.new do |s|
  s.name             = 'TYFoundationKit'
  s.version          = '0.0.1'
  s.summary          = 'A short description of TYFoundationKit.'

  s.homepage         = 'https://github.com/TuyaInc/TYFoundationKit'
  s.author           = { 'TuyaInc' => 'www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYFoundationKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'TYFoundationKit/Classes/**/*'
end
