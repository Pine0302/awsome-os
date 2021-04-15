Vagrant.configure("2") do |config|
  config.vm.provider "virtualbox" do |vb|
    vb.memory = "4096"
    vb.cpus = "2"
  end
  config.vm.box = "generic/debian10"

  config.vm.synced_folder "./", "/vagrant"
end
