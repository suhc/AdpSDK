Pod::Spec.new do |s|
  s.name         = 'AdpSDK'
  s.version      = '4.0.2'
  s.summary      = 'adpsdk'
  s.homepage     = 'https://ddd.com'
  s.license      = 'MIT'
  s.authors      = {'lee' => '123456@qq.com'}
  s.platform     = :ios, '12.0'
  s.source       = {:git => 'https://github.com/suhc/AdpSDK.git', :tag => s.version}
  
  
  s.dependency 'AnyThinkiOS','6.4.87'
  s.dependency 'AnyThinkGDTSDKAdapter','6.4.87.3'
  s.dependency 'AnyThinkGromoreSDKAdapter','6.4.87.3'
  s.dependency 'AnyThinkBaiduSDKAdapter','6.4.87.3'
  s.dependency 'AnyThinkKuaiShouSDKAdapter','6.4.87.3'
  s.dependency 'AnyThinkTTSDKAdapter_Mix','6.4.87.3'
  s.dependency 'OctopusSDK/OctToponAdapterSDK'
  s.dependency 'AnyThinkMintegralSDKAdapter','6.4.87'






  # 设置默认只安装Core子模块
  s.default_subspecs = 'Core'
  
  # 核心子模块（必须的基础功能）
  s.subspec 'Core' do |core|
    core.vendored_frameworks = 'base/AdpSDK.framework'
     
    
     # .a 静态库文件
  core.vendored_libraries = [
    'base/libWindMillBidResultPlugin.a',
  ]
    core.frameworks = 'UIKit', 'Foundation'
    core.requires_arc = true
    core.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  end


  

 
end
