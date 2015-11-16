Pod::Spec.new do |s|
  s.name                    = 'PFKit'
  s.version                 = '0.0.3'
  s.summary                 = '对系统API进行简单封装，实现常用功能'
  s.homepage                = 'https://github.com/PFei-He/PFKit'
  s.license                 = { :type => 'MIT', :file => 'LICENSE' }
  s.author                  = { "PFei-He" => "498130877@qq.com" }
  s.platform                = :ios, '7.0'
  s.ios.deployment_target   = '7.0'
  s.source                  = { :git => 'https://github.com/PFei-He/PFKit.git', :tag => 's.version', :submodules => true }
  s.source_files            = 'PFKit.h'
  s.public_header_files     = 'PFKit.h'
  s.requires_arc            = true

  s.subspec 'Catagory' do |ss|
    ss.source_files = 'PFKit/Catagory/{NSString,UIView}+PFKit.{h,m}'
  end

  s.subspec 'PFKit' do |ss|
    ss.source_files = 'PFKit/PFKit/PF{File,Model,QRCode,Time}.{h,m}'
  end
end
