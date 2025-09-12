Pod::Spec.new do |s|
  s.name         = 'AdpSDK'
  s.version      = '7.0.1'
  s.summary      = 'adpsdk'
  s.homepage     = 'https://ddd.com'
  s.license      = 'MIT'
  s.authors      = {'lee' => '123456@qq.com'}
  s.platform     = :ios, '12.0'
  s.source       = {:git => 'https://github.com/suhc/AdpSDK.git', :tag => s.version}
  
  s.dependency 'IpaAdiOS','6.4.92'
  s.dependency 'IpaAdBaiduSDKAdapter','6.4.92'
  s.dependency 'IpaAdKuaiShouSDKAdapter','6.4.92'
  s.dependency 'IpaAdGDTSDKAdapter','6.4.92'
  s.dependency 'IpaAdSigmobSDKAdapter','6.4.92'
  s.dependency 'IpaAdTTSDKAdapter_Mix','6.4.92'
  s.dependency 'IpaAdGromoreSDKAdapter','6.4.92'
  
 # 依赖库和系统框架
  s.frameworks = %w[
    AVFoundation
    AdSupport
    CoreLocation
    CoreML
    CoreMedia
    CoreMotion
    CoreTelephony
    DeviceCheck
    JavaScriptCore
    MessageUI
    SafariServices
    StoreKit
    SystemConfiguration
    WebKit
  ]
  s.libraries = %w[
    bz2
    c++
    resolv.9
    sqlite3
    xml2
    c++abi

  ]

  # 额外的编译配置
  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '-ObjC -l"c++" -l"c++abi" -l"sqlite3" -l"z"'
  }
  

  # 设置默认只安装Core子模块
  s.default_subspecs = 'Core'
  
  # 核心子模块（必须的基础功能）
  s.subspec 'Core' do |core|
 core.vendored_frameworks = [
      'base/AdpSDK.framework'
  ]
 core.source_files = [
    'base/**/*.h'
  ]
     

     # .a 静态库文件
  core.vendored_libraries = [
        'base/**/*.a'

  ]
    core.frameworks = 'UIKit', 'Foundation'
    core.requires_arc = true
    core.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  end


  

 
end
