
Pod::Spec.new do |s|
  s.name             = 'TYFoundationKit'
  s.version          = '0.0.1'
  s.summary          = 'TYFoundationKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.homepage         = 'https://github.com/TuyaInc/TYFoundationKit'
  s.author           = { 'TuyaInc' => 'www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYFoundationKit.git', :branch => 'cocoa', :commit => '7e4137d5740d77737d9ac87516b3993e0ed549c9' }

  s.ios.deployment_target = '8.0'

  s.source_files = 'TYFoundationKit/Classes/**/*'
end
