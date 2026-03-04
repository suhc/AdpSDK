Pod::Spec.new do |s|
  s.name         = 'AdpSDK'
  s.version      = '80.0.2'
  s.summary      = 'adpsdk'
  s.homepage     = 'https://ddd.com'
  s.license      = 'MIT'
  s.authors      = {'lee' => '123456@qq.com'}
  s.platform     = :ios, '12.0'
  s.source       = {:git => 'https://github.com/suhc/AdpSDK.git', :tag => s.version}
  
  # 设置默认只安装Core子模块
  s.default_subspecs = 'Core'
  
  # 核心子模块（必须的基础功能）
  s.subspec 'Core' do |core|
    core.vendored_frameworks = [
      'base/AdpSDK.framework',
      'base/WindFoundation.xcframework',
      'base/WindMillSDK.xcframework',
      'base/WindSDK.xcframework',
    ]
   
    
    core.frameworks = 'UIKit', 'Foundation'
    core.requires_arc = true
    core.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  end

  # GDT适配器子模块（可选）
  s.subspec 'GDTAdapter' do |gdt|
    gdt.vendored_libraries = 'core/libWindMillGDTAdapter.a'
    gdt.dependency 'AdpSDK/Core'
  end
  

  # ks（可选）
  s.subspec 'KSAdapter' do |ks|
    ks.vendored_libraries = 'core/libWindMillKSAdapter.a'
    ks.dependency 'AdpSDK/Core'
  end
  
    # gromore（可选）
  s.subspec 'GromoreAdapter' do |gromore|
    gromore.vendored_libraries = 'core/libWindMillGroMoreAdapter.a'
    gromore.dependency 'AdpSDK/Core'
  end
  
      # baidu（可选）
  s.subspec 'BaiduAdapter' do |baidu|
    baidu.vendored_libraries = 'core/libWindMillBaiduAdAdapter.a'
    baidu.dependency 'AdpSDK/Core'
  end
  
        # tt（可选）
  s.subspec 'TTAdapter' do |tt|
    tt.vendored_libraries = 'core/libWindMillTTAdAdapter.a'
    tt.dependency 'AdpSDK/Core'
  end

          # mt（可选）
  s.subspec 'MTAdapter' do |tt|
    tt.vendored_libraries = 'core/libWindMillMTGAdapter.a'
    tt.dependency 'AdpSDK/Core'
  end
          # ms（可选）
  s.subspec 'MSAdapter' do |tt|
    tt.vendored_libraries = 'core/libWindMillMSAdAdapter.a'
    tt.dependency 'AdpSDK/Core'
  end
          # bz（可选）
  s.subspec 'BZAdapter' do |tt|
    tt.vendored_libraries = 'core/libWindMillBeiZiAdapter.a'
    tt.dependency 'AdpSDK/Core'
  end
 
end
